// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIIMAGEFACTORY_H
#define VUIIMAGEFACTORY_H


#import <Foundation/Foundation.h>


@interface VUIImageFactory : NSObject



+(id)URLFromSource:(id)arg0 extension:(id)arg1 p3Specifier:(id)arg2 cropCode:(id)arg3 imageSize:(struct CGSize )arg4 centerGrowth:(BOOL)arg5 focusSizeIncrease:(CGFloat)arg6 ;
+(id)_getResourceImageFromDescriptor:(id)arg0 ;
+(id)_imageProxyWithURL:(id)arg0 ;
+(id)_makeImageViewWithDescriptor:(id)arg0 proxy:(id)arg1 existingView:(id)arg2 ;
+(id)_makeSourceStringFromSource:(id)arg0 p3Specifier:(id)arg1 ;
+(id)makeImageProxyWithDescriptor:(id)arg0 ;
+(id)makeImageViewWithDescriptor:(id)arg0 existingView:(id)arg1 ;
+(id)makeImageViewWithResourceDescriptor:(id)arg0 existingView:(id)arg1 ;


@end


#endif