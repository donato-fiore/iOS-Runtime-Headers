// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSMARTPROMPTINTENT_H
#define WFSMARTPROMPTINTENT_H

@class INIntent, NSArray, INFile, NSString;


#import "WFSmartPromptButton.h"

@interface WFSmartPromptIntent : INIntent

@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) INFile *privacyIcon;
@property (copy, nonatomic) NSString *privacyTitle;
@property (copy, nonatomic) NSString *promptMessage;
@property (copy, nonatomic) WFSmartPromptButton *selectedButton;




@end


#endif