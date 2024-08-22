// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKPKFACTORY_H
#define TSKPKFACTORY_H


#import <Foundation/Foundation.h>


@interface TSKPKFactory : NSObject



+(BOOL)modernPencilKitAvailable;
+(BOOL)pencilKitAvailable;
+(BOOL)usingLegacyPencilKit;
+(NSInteger)toolTypeForInkIdentifier:(id)arg0 ;
+(id)canvasViewWithFrame:(struct CGRect )arg0 ;
+(id)imageRendererWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
+(id)inkIdentifierForToolType:(NSInteger)arg0 ;
+(id)inkWithIdentifier:(id)arg0 color:(id)arg1 weight:(CGFloat)arg2 ;
+(id)recognizerWithType:(int)arg0 mode:(int)arg1 ;
+(id)recognizers;
+(void)initialize;


@end


#endif