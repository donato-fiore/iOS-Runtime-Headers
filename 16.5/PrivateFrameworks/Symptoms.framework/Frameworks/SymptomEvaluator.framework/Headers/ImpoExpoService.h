// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMPOEXPOSERVICE_H
#define IMPOEXPOSERVICE_H

@class AnalyticsWorkspace;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ImpoExpoService : NSObject {
    AnalyticsWorkspace *workspace;
    NSObject<OS_dispatch_queue> *queue;
}




+(BOOL)_supportArchivingOfObject:(id)arg0 ;
+(id)_supportedClasses;
+(id)impoExpoServiceInWorkspace:(id)arg0 andQueue:(id)arg1 ;
-(BOOL)archiveAndImportItemUnderName:(id)arg0 item:(id)arg1 ;
-(BOOL)importItemUnderName:(id)arg0 item:(id)arg1 ;
-(BOOL)importValueUnderName:(id)arg0 value:(NSUInteger)arg1 ;
-(NSInteger)deleteItemsMatchingPredicate:(id)arg0 ;
-(NSInteger)deleteItemsWithNames:(id)arg0 ;
-(NSInteger)deleteItemsWithPrefix:(id)arg0 ;
-(NSInteger)deleteItemsWithPrefixes:(id)arg0 ;
-(NSUInteger)exportValueUnderName:(id)arg0 lastUpdated:(*id)arg1 ;
-(id)_initInWorkspace:(id)arg0 andQueue:(id)arg1 ;
-(id)_locateRecord:(id)arg0 createMissing:(BOOL)arg1 ;
-(id)_nameSubfix;
-(id)exportAndUnarchiveItemUnderName:(id)arg0 lastUpdated:(*id)arg1 verificationBlock:(id)arg2 ;
-(id)exportItemUnderName:(id)arg0 lastUpdated:(*id)arg1 verificationBlock:(id)arg2 ;
-(id)listItemsNameWithPrefix:(id)arg0 sortDescriptor:(id)arg1 ;


@end


#endif