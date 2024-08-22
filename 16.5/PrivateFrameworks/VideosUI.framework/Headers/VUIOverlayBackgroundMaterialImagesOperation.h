// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIOVERLAYBACKGROUNDMATERIALIMAGESOPERATION_H
#define VUIOVERLAYBACKGROUNDMATERIALIMAGESOPERATION_H

@class NSOperation, NSDictionary, NSArray, UIImage;



@interface VUIOverlayBackgroundMaterialImagesOperation : NSOperation

@property (copy, nonatomic) NSDictionary *overlayMaterialImageByIdentifier; // ivar: _overlayMaterialImageByIdentifier
@property (copy, nonatomic) NSArray *overlayMaterialRequests; // ivar: _overlayMaterialRequests
@property (nonatomic) CGSize resizedBackgroundImageSize; // ivar: _resizedBackgroundImageSize
@property (retain, nonatomic) UIImage *resizedSourceBackgroundImage; // ivar: _resizedSourceBackgroundImage
@property (retain, nonatomic) UIImage *sourceBackgroundImage; // ivar: _sourceBackgroundImage


-(id)_blurredMaterialImageWithSourceBackgroundImage:(id)arg0 forRect:(struct CGRect )arg1 croppedRect:(struct CGRect )arg2 ;
-(id)init;
-(id)initWithSourceBackgroundImage:(id)arg0 ;
-(void)main;


@end


#endif