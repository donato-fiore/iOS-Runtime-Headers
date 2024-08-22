// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCDAEMONDATABASEPROVIDER_H
#define VCDAEMONDATABASEPROVIDER_H

@class WFDatabase, NSString;
@protocol WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCDaemonDatabaseProvider : NSObject <WFDatabaseProvider>



@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)isShortcutsAppInstalled;
-(id)databaseWithError:(*id)arg0 ;
-(id)init;
-(void)migrateVoiceShortcutsToShortcutsInDatabase:(id)arg0 ;


@end


#endif