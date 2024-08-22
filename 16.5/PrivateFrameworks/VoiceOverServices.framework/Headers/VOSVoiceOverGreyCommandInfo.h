// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VOSVOICEOVERGREYCOMMANDINFO_H
#define VOSVOICEOVERGREYCOMMANDINFO_H


#import <Foundation/Foundation.h>


@interface VOSVoiceOverGreyCommandInfo : NSObject



+(BOOL)_isStingSupported;
+(BOOL)isVoiceOverGreyFeatureOn;
+(id)_pairedDevice;
+(id)defaultActions;
+(id)defaultCustomizeGestures;
+(id)nameForAction:(id)arg0 ;
+(id)symbolNameForAction:(id)arg0 ;


@end


#endif