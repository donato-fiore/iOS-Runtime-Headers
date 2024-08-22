// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCIMAGECONTENTRECTCALCULATOR_H
#define VKCIMAGECONTENTRECTCALCULATOR_H


#import <Foundation/Foundation.h>


@interface VKCImageContentRectCalculator : NSObject



+(struct CGRect )processNormalizedRect:(struct CGRect )arg0 forContentMode:(NSInteger)arg1 ;
+(struct CGRect )unitContentsRectForBounds:(struct CGRect )arg0 contentMode:(NSInteger)arg1 imageSize:(struct CGSize )arg2 ;


@end


#endif