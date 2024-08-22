// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLDOMHIGHLIGHTCONFIG_H
#define RWIPROTOCOLDOMHIGHLIGHTCONFIG_H



#import "RWIProtocolJSONObject.h"
#import "RWIProtocolDOMRGBAColor.h"

@interface RWIProtocolDOMHighlightConfig : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolDOMRGBAColor *borderColor;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *contentColor;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *marginColor;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *paddingColor;
@property (nonatomic) BOOL showInfo;




@end


#endif