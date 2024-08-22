// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BRCFRAMEWORKOPERATION_H
#define _BRCFRAMEWORKOPERATION_H

@class BRCOperation, NSString;
@protocol BRCancellable, BROperationClient;



@interface _BRCFrameworkOperation : BRCOperation <BRCancellable>

 {
    BOOL _startedFinish;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreMissingRemoteClientProxy; // ivar: _ignoreMissingRemoteClientProxy
@property (retain, nonatomic) NSObject<BROperationClient> *remoteClientProxy; // ivar: _remoteClientProxy
@property (readonly) Class superclass;


-(id)descriptionAdditionalStringWithContext:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)invalidate;
-(void)start;


@end


#endif