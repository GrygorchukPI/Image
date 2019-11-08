#include "Image.h"
#include "ImageFile.h"

void ImageFile::GetBitmap(Image &image)
{
    image.RGB_BGR_Switch();
    //image.FlipVertical();
    this->bitmapSize = image.GetBitmapSize();
    this->width      = image.GetWidth();
    this->height     = image.GetHeight();

    this->bitmap = new uint8_t[this->bitmapSize];
    uint8_t* innerBitmap = image.GetBitmap();

    for (uint32_t i = 0; i < this->bitmapSize; ++i)
    {
        this->bitmap[i] = innerBitmap[i];
    }
}

void ImageFile::SetBitmap(Image &image)
{
    image.SetBitmapSize(this->bitmapSize);
    image.SetWidth(this->width);
    image.SetHeight(this->height);
    image.SetBitmap(this->bitmap);
    image.RGB_BGR_Switch();
    //image.FlipVertical();

    //Delete bitmap after use it.
    if(this->bitmap != nullptr)
    {
        delete[] this->bitmap;
    }
}

ImageFile::~ImageFile()
{
    if(this->bitmap != nullptr)
    {
        delete[] this->bitmap;
    }

    if(this->buffer != nullptr)
    {
        delete[] this->buffer;
    }
}
