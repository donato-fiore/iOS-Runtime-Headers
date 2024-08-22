// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFCARENDERERIMAGEREPRESENTATION_H
#define SBFCARENDERERIMAGEREPRESENTATION_H

@class NSURL, NSData, IOSurface;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBFCARendererImageRepresentation : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (readonly, nonatomic) NSInteger representationType; // ivar: _representationType
@property (readonly, nonatomic) IOSurface *surface; // ivar: _surface


+(BOOL)supportsSecureCoding;
+(id)representationWithFileURL:(id)arg0 imageOrientation:(NSInteger)arg1 ;
+(id)representationWithIOSurface:(id)arg0 imageOrientation:(NSInteger)arg1 ;
+(id)representationWithImage:(id)arg0 ;
+(id)representationWithImageData:(id)arg0 imageOrientation:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGImage *)createCGImageReturningScale:(*CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif