// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFIMAGE_H
#define WFIMAGE_H

@class UIImage, NSImage, NSData, NSURL, NSBundle, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFImageSymbolConfiguration.h"
#import "WFColor.h"

@interface WFImage : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internalCGImage;
    id *_internalImageSource;
    UIImage *_UIImage;
}


@property (readonly, nonatomic) *CGImage CGImage; // ivar: _CGImage
@property (readonly, nonatomic) CGSize CGImageSize;
@property (readonly, weak, nonatomic) NSImage *NSImage; // ivar: _NSImage
@property (readonly, nonatomic) NSData *PNGRepresentation;
@property (readonly, nonatomic) UIImage *UIImage;
@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) BOOL allowsAnimated; // ivar: _allowsAnimated
@property (readonly, copy, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) BOOL hasValidImage;
@property (readonly, nonatomic) *CGImage internalCGImage;
@property (readonly, nonatomic) *CGImageSource internalImageSource;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int orientation; // ivar: _orientation
@property (readonly, nonatomic) UIImage *platformImage;
@property (readonly, nonatomic) NSUInteger renderingMode; // ivar: _renderingMode
@property (readonly, nonatomic) NSInteger representationType; // ivar: _representationType
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize sizeInPixels;
@property (readonly, nonatomic) CGSize sizeInPoints;
@property (readonly, nonatomic) WFImageSymbolConfiguration *symbolConfiguration; // ivar: _symbolConfiguration
@property (readonly, copy, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (copy, nonatomic) WFColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) NSImage *untintedNSImage; // ivar: _untintedNSImage
@property (readonly, nonatomic) UIImage *untintedPlatformImage;
@property (readonly, nonatomic) UIImage *untintedUIImage;


+(BOOL)supportsSecureCoding;
+(id)applicationIconImageForBundleIdentifier:(id)arg0 ;
+(id)applicationIconImageForBundleIdentifier:(id)arg0 format:(NSUInteger)arg1 ;
+(id)applicationIconImageForCalendarDate:(id)arg0 format:(NSUInteger)arg1 ;
+(id)documentIconImageForFileType:(id)arg0 ;
+(id)glyphNamed:(id)arg0 pointSize:(CGFloat)arg1 ;
+(id)glyphNamed:(id)arg0 pointSize:(CGFloat)arg1 inCatalogs:(id)arg2 ;
+(id)glyphNamed:(id)arg0 pointSize:(CGFloat)arg1 symbolSize:(NSUInteger)arg2 ;
+(id)glyphNamed:(id)arg0 pointSize:(CGFloat)arg1 symbolSize:(NSUInteger)arg2 scaleFactor:(CGFloat)arg3 ;
+(id)glyphNamed:(id)arg0 pointSize:(CGFloat)arg1 symbolSize:(NSUInteger)arg2 scaleFactor:(CGFloat)arg3 rightToLeft:(BOOL)arg4 appearanceName:(id)arg5 ;
+(id)glyphNamed:(id)arg0 pointSize:(CGFloat)arg1 symbolSize:(NSUInteger)arg2 symbolWeight:(NSInteger)arg3 scaleFactor:(CGFloat)arg4 rightToLeft:(BOOL)arg5 appearanceName:(id)arg6 inCatalogs:(id)arg7 ;
+(id)glyphNamed:(id)arg0 pointSize:(CGFloat)arg1 symbolWeight:(NSInteger)arg2 scaleFactor:(CGFloat)arg3 inCatalogs:(id)arg4 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 scale:(CGFloat)arg2 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(unsigned int)arg2 ;
+(id)imageWithContentsOfURL:(id)arg0 ;
+(id)imageWithData:(id)arg0 ;
+(id)imageWithData:(id)arg0 scale:(CGFloat)arg1 ;
+(id)imageWithData:(id)arg0 scale:(CGFloat)arg1 allowAnimated:(BOOL)arg2 ;
+(id)imageWithDeviceScreenScaleImageData:(id)arg0 ;
+(id)systemImageNamed:(id)arg0 configuration:(id)arg1 renderingMode:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)applicationIconImageWithFormat:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageByTintingBitmapWithTintColor:(id)arg0 ;
-(id)imageWithRenderingMode:(NSUInteger)arg0 ;
-(id)imageWithTintColor:(id)arg0 ;
-(id)init;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(unsigned int)arg2 ;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(unsigned int)arg2 renderingMode:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithData:(id)arg0 scale:(CGFloat)arg1 allowAnimated:(BOOL)arg2 ;
-(id)initWithName:(id)arg0 bundle:(id)arg1 scale:(CGFloat)arg2 ;
-(id)initWithPlatformImage:(id)arg0 ;
-(id)initWithRepresentationType:(NSInteger)arg0 ;
-(id)initWithSymbolName:(id)arg0 configuration:(id)arg1 renderingMode:(NSUInteger)arg2 ;
-(id)resizedImageWithSizeInPoints:(struct CGSize )arg0 ;
-(id)resizedImageWithSizeInPoints:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)tintedImageWithColor:(id)arg0 ;
-(struct CGAffineTransform )contentsTransformForDrawingWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(void)dealloc;
-(void)drawInContext:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)drawInContext:(id)arg0 inRect:(struct CGRect )arg1 blendMode:(int)arg2 alpha:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif