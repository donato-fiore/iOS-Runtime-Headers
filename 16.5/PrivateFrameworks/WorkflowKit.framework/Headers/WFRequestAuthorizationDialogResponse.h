// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREQUESTAUTHORIZATIONDIALOGRESPONSE_H
#define WFREQUESTAUTHORIZATIONDIALOGRESPONSE_H

@class WFDialogResponse;



@interface WFRequestAuthorizationDialogResponse : WFDialogResponse

@property (readonly, nonatomic) NSUInteger result; // ivar: _result


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseCode:(NSInteger)arg0 ;
-(id)initWithResult:(NSUInteger)arg0 ;
-(id)initWithResult:(NSUInteger)arg0 cancelled:(BOOL)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif