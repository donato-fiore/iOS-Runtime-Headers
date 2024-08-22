// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUINAMEDLAYERIMAGE_H
#define VUINAMEDLAYERIMAGE_H

@class NSString, UIImage;
@protocol UINamedLayerImage, UINamedLayerContentProvider;

#import <Foundation/Foundation.h>


@interface VUINamedLayerImage : NSObject <UINamedLayerImage>



@property (nonatomic) int blendMode; // ivar: _blendMode
@property (readonly, nonatomic) NSObject<UINamedLayerContentProvider> *contentProvider;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImage *decodedImage; // ivar: _decodedImage
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fixedFrame;
@property (readonly, nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<UINamedLayerImage> *namedLayerImage; // ivar: _namedLayerImage
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly) Class superclass;


+(id)decodedNamedLayerImageFromNamedLayerImage:(id)arg0 ;
+(id)namedLayerImageFromNamedLayerImage:(id)arg0 ;
-(id)_init;
-(id)imageObj;
-(id)init;


@end


#endif