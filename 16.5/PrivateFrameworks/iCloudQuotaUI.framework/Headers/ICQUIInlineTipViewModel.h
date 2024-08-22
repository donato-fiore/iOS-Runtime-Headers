// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUIINLINETIPVIEWMODEL_H
#define ICQUIINLINETIPVIEWMODEL_H

@class AMSUIMessageRequest, ICQInlineTip, AMSUIBubbleTipInlineAnchorInfo;

#import <Foundation/Foundation.h>


@interface ICQUIInlineTipViewModel : NSObject

@property (readonly, copy, nonatomic) AMSUIMessageRequest *request;
@property (readonly, copy, nonatomic) ICQInlineTip *tip; // ivar: _tip
@property (readonly, copy, nonatomic) AMSUIBubbleTipInlineAnchorInfo *tipArrow;


-(id)initWithInlineTip:(id)arg0 ;


@end


#endif