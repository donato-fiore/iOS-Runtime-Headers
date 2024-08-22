// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUBACKGROUNDTASKOPERATION_H
#define SUBACKGROUNDTASKOPERATION_H

@class ISOperation, NSString;



@interface SUBackgroundTaskOperation : ISOperation {
    ISOperation *_operation;
    NSString *_permissionIdentifier;
    NSUInteger _taskIdentifier;
}


@property (readonly) ISOperation *operation;
@property (readonly) NSString *permissionIdentifier;


-(id)initWithOperation:(id)arg0 identifier:(id)arg1 ;
-(void)_cancelBackgroundAssertion;
-(void)_removeBackgroundAssertion;
-(void)_takeBackgroundAssertion;
-(void)dealloc;
-(void)run;


@end


#endif