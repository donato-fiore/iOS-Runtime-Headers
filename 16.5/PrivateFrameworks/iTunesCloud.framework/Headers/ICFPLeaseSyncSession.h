// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICFPLEASESYNCSESSION_H
#define ICFPLEASESYNCSESSION_H


#import <Foundation/Foundation.h>


@interface ICFPLeaseSyncSession : NSObject {
    *FPLeaseSyncOpaque_ _fpLeaseSync;
    FairPlayHWInfo_ _hardwareInfo;
}


@property (readonly, nonatomic) NSUInteger accountID; // ivar: _accountID
@property (readonly, nonatomic) id *leaseID; // ivar: _leaseID
@property (readonly, nonatomic) unsigned int mediaKind; // ivar: _mediaKind


+(id)leaseSyncSessionWithID:(id)arg0 accountID:(NSUInteger)arg1 mediaKind:(unsigned int)arg2 returningLeaseSyncRequestData:(*id)arg3 error:(*id)arg4 ;
-(BOOL)endLeaseSyncAndReturnError:(*id)arg0 ;
-(BOOL)getLeaseSyncRenewRequestData:(*id)arg0 error:(*id)arg1 ;
-(BOOL)importLeaseSyncResponseData:(id)arg0 error:(*id)arg1 ;
-(BOOL)processRenewResponseData:(id)arg0 error:(*id)arg1 ;
-(id)_initWithFPLeaseSync:(struct FPLeaseSyncOpaque_ *)arg0 leaseID:(id)arg1 accountID:(NSUInteger)arg2 hardwareInfo:(struct FairPlayHWInfo_ )arg3 mediaKind:(unsigned int)arg4 ;
-(void)dealloc;


@end


#endif