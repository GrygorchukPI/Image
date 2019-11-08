#ifndef IMAGEFILE_H
#define IMAGEFILE_H

#include<stdio.h>
#include <string>
#include <cstdint>
#include "Image.h"

class ImageFile
{
public:
    virtual ~ImageFile();

    virtual void ReadFile (Image &image, const std::string &source) = 0;
    virtual void WriteFile(Image &image, const std::string &source) = 0;

protected:
    virtual void FileToBuffer(const std::string &source) = 0;
    virtual void BufferToFile(const std::string &source) = 0;

    virtual void BufferToBitmap() = 0;
    virtual void BitmapToBuffer() = 0;

    void GetBitmap(Image &image);
    void SetBitmap(Image &image);

    uint32_t  bitmapSize;
    uint8_t*  bitmap;

    uint32_t bufferSize;
    uint8_t* buffer;

    uint32_t width;
    uint32_t height;
};

#endif // IMAGEFILE_H
