// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYEVENTMAP_ZH_STROKE_H
#define TIKEYEVENTMAP_ZH_STROKE_H

@class zh;



@interface TIKeyEventMap_zh_Stroke : zh



+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
-(BOOL)isNumericWubi:(id)arg0 ;
-(id)remapKeyWithString:(id)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(NSUInteger)arg2 keyboardState:(id)arg3 ;
-(id)wubiFromASCII:(id)arg0 ;


@end


#endif