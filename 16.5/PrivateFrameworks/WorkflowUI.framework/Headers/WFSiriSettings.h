// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRISETTINGS_H
#define WFSIRISETTINGS_H


#import <Foundation/Foundation.h>


@interface WFSiriSettings : NSObject



+(BOOL)isHeySiriEnabled;
+(BOOL)isSiriEnabled;
+(id)localizedTriggerPhrase;
+(id)localizedTriggerPhraseWithMessage:(id)arg0 ;


@end


#endif