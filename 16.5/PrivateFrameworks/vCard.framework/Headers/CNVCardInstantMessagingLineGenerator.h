// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDINSTANTMESSAGINGLINEGENERATOR_H
#define CNVCARDINSTANTMESSAGINGLINEGENERATOR_H



#import "CNVCardLineGenerator.h"

@interface CNVCardInstantMessagingLineGenerator : CNVCardLineGenerator



+(id)instantMessageUsernameWithSchemeForUsername:(id)arg0 service:(id)arg1 ;
+(id)serviceTypeStringForInstantMessageService:(id)arg0 ;
-(id)lineWithValue:(id)arg0 label:(id)arg1 ;
-(id)makeLineWithName:(id)arg0 value:(id)arg1 ;
-(id)standardLabelsForLabel:(id)arg0 ;


@end


#endif