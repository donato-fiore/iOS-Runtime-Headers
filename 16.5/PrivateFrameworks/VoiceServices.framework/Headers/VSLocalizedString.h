// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSLOCALIZEDSTRING_H
#define VSLOCALIZEDSTRING_H


#import <Foundation/Foundation.h>


@interface VSLocalizedString : NSObject



+(id)appendRandomizationKey:(id)arg0 withCount:(int)arg1 ;
+(id)localizedInterstitialStringForKey:(id)arg0 language:(id)arg1 ;
+(id)localizedOOBStringForKey:(id)arg0 language:(id)arg1 ;
+(id)localizedOOBStringForKey:(id)arg0 language:(id)arg1 gender:(id)arg2 ;
+(id)localizedStringForKey:(id)arg0 language:(id)arg1 table:(id)arg2 ;
+(id)predefinedStringForKey:(id)arg0 language:(id)arg1 table:(id)arg2 ;


@end


#endif