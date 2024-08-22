// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYEVENTMAP_ZH_HANT_ZHUYIN_H
#define TIKEYEVENTMAP_ZH_HANT_ZHUYIN_H

@class Phonetic;



@interface TIKeyEventMap_zh_Hant_Zhuyin : Phonetic



+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
-(BOOL)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)arg0 ;
-(BOOL)shouldInsertZhuyinCharacterAfter:(id)arg0 ;
-(id)punctuationMap;
-(id)remapKeyWithString:(id)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(NSUInteger)arg2 keyboardState:(id)arg3 ;


@end


#endif