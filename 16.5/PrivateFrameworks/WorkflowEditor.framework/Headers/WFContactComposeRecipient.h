// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTACTCOMPOSERECIPIENT_H
#define WFCONTACTCOMPOSERECIPIENT_H

@class CNComposeRecipient, WFContact;



@interface WFContactComposeRecipient : CNComposeRecipient

@property (readonly, nonatomic) WFContact *wfContact; // ivar: _wfContact


-(id)displayString;
-(id)initWithWFContact:(id)arg0 ;
-(id)wf_contactFieldEntry;


@end


#endif