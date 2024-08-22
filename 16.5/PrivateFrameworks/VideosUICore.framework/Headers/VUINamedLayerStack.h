// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUINAMEDLAYERSTACK_H
#define VUINAMEDLAYERSTACK_H

@class UIImage, NSString, NSArray;
@protocol UINamedLayerStack;

#import <Foundation/Foundation.h>


@interface VUINamedLayerStack : NSObject <UINamedLayerStack>



@property (retain, nonatomic) UIImage *cornerRadiusFlatImage; // ivar: _cornerRadiusFlatImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL flatImageContainsCornerRadius;
@property (readonly, nonatomic) *CGImage flattenedImage;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<UINamedLayerStack> *layerStack; // ivar: _layerStack
@property (readonly, nonatomic) NSArray *layers;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *originalImage; // ivar: _originalImage
@property (readonly, nonatomic) id *radiosityImage;
@property (readonly, nonatomic) CGSize radiosityImageScale;
@property (copy, nonatomic) NSArray *replacementLayers; // ivar: _replacementLayers
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;


+(id)decodedNamedLayerStackWithImage:(id)arg0 size:(struct CGSize )arg1 cornerRadius:(CGFloat)arg2 ;
+(id)namedLayerStackWithImage:(id)arg0 ;
-(id)_init;
-(id)init;


@end


#endif