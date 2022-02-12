// I commented out the parts I couldn't figure out how to get working which was pretty much
// the parts to decode the data chunk...

#include <cstdio>

int main(int argc, char** argv) {
	unsigned char riff[4];				// riff string
	unsigned int size;				// total size of wave file
	unsigned char wave[4];				// wave string
	unsigned char fmt[4];				// format string with space
	unsigned int fmtLength;				// length of format
	unsigned short fmtType;				// format type, should be 1
	unsigned short nChannels;			// 1 for mono 2 for double
	unsigned int sampleRate;			// samples per second
	unsigned int byteRate;				// sampleRate*channels*bps/8
	unsigned short align;				// channels*bps/8
	unsigned short bps;				// bits_per_sample
	unsigned char data[4];				// data string
	unsigned int dataSize;				// size of data in bytes
//	unsigned char* contents;			// audio samples
	FILE* wavf = fopen("./example.wav", "rb");	// open wav file

	fread(riff, sizeof(char), 4, wavf);		// loop print riff string
	printf("Header\t\t");
	for (int i = 0; i < 4; ++i) {
		printf("%c", riff[i]);
	}
	printf(" ");					// don't skip print line

	fread(&size, 4, 1, wavf);			// ignore size

	fread(wave, sizeof(char), 4, wavf);		// read wave string
	for (int i = 0; i < 4; ++i) {
		printf("%c", wave[i]);
	}
	printf("\n");
	
	fread(fmt, sizeof(char), 4, wavf);		// read fmt string
	for (int i = 0; i < 4; ++i) {
		printf("%c", fmt[i]);
	}
	printf("\n");
	
	fread(&fmtLength, sizeof(int), 1, wavf);	// read format length
	printf("Format Size\t%i\n", fmtLength);
	
	fread(&fmtType, sizeof(short), 1, wavf);	// read format type
	printf("Format Type\t%i\n", fmtType);
	
	fread(&nChannels, sizeof(short), 1, wavf);	// read nchannels
	printf("Channels\t%i\n", nChannels);
	
	fread(&sampleRate, sizeof(int), 1, wavf);	// read samples per second
	printf("Sample Rate\t%i\n", sampleRate);
	
	fread(&byteRate, sizeof(int), 1, wavf);		// read byte rate
	printf("Byte Rate\t%i\n", byteRate);
	
	fread(&align, sizeof(short), 1, wavf);		// read align
	printf("Align\t\t%i\n", align);
	
	fread(&bps, sizeof(short), 1, wavf);		// read bits per sample
	printf("Bits Per Sample\t%i\n", bps);
	
	fread(data, sizeof(char), 4, wavf);		// loop print data string
	for (int i = 0; i < 4; ++i) {
		printf("%c", data[i]);
	}
	printf("\n");
	
	fread(&dataSize, sizeof(int), 1, wavf);		// read size of data chunk
	printf("Data Size\t%i\n", dataSize);
	
//	fread(contents, sizeof(char), dataSize, wavf);	// loop print data contents
	
	fclose(wavf);					// close wav file
}
