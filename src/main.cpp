#include <stdio.h>
#include <stdlib.h>

void readImageData(const char* path,
                   unsigned char* dataArr,
                   int* size,
                   int* nOfImages,
                   int* rowsize,
                   int* colsize)
{
    FILE* file;
    file = fopen(path, "r");
    
    if (file == NULL)    
        exit(1);



    if (fclose(file) != 0)
        exit(1);

}




int main()
{
    FILE* trainingImages;
    FILE* trainingLabels;

    trainingImages = fopen("./../data/train-images.idx3-ubyte", "r");
    trainingLabels = fopen("./../data/train-labels.idx1-ubyte", "r");

    fclose(trainingImages);
    fclose(trainingLabels);
    return 0;
}
