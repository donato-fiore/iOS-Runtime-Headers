// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFASKPARAMETERDIALOGRESPONSE_H
#define WFASKPARAMETERDIALOGRESPONSE_H

@class WFDialogResponse;
@protocol NSSecureCoding, WFPropertyListObject;



@interface WFAskParameterDialogResponse : WFDialogResponse <NSSecureCoding>



@property (readonly, nonatomic) NSObject<WFPropertyListObject> *serializedParameterState; // ivar: _serializedParameterState


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedParameterState:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif