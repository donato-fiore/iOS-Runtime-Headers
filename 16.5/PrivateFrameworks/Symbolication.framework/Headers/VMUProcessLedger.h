// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUPROCESSLEDGER_H
#define VMUPROCESSLEDGER_H


#import <Foundation/Foundation.h>


@interface VMUProcessLedger : NSObject



+(id)_getProcessLedgerDictFromCrashInfo:(NSUInteger)arg0 DataSize:(NSUInteger)arg1 ;
+(id)_getProcessLedgerDictFromKernelLedger:(int)arg0 ;
+(id)ledgerForTask:(unsigned int)arg0 ;


@end


#endif