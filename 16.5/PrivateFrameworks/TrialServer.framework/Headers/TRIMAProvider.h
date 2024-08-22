// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIMAPROVIDER_H
#define TRIMAPROVIDER_H

@protocol TRIMAProviding;

#import <Foundation/Foundation.h>

#import "TRISQLiteMADatabase.h"

@interface TRIMAProvider : NSObject <TRIMAProviding>

 {
    TRISQLiteMADatabase *_db;
}




+(id)fetchRetryDateFromAttribution:(id)arg0 isDeferral:(BOOL)arg1 ;
-(BOOL)_shouldMockMobileAssets;
-(id)_sqliteMADatabase;
-(id)createAutoAssetWithId:(id)arg0 decryptionKey:(id)arg1 error:(*id)arg2 ;
-(id)downloadAssets:(id)arg0 attribution:(id)arg1 aggregateProgress:(id)arg2 group:(id)arg3 completion:(id)arg4 ;
-(id)endAllPreviousLocksOfReasonSync:(id)arg0 forClientName:(id)arg1 forAssetSelector:(id)arg2 ;
-(id)endAllPreviousLocksOfSelectorSync:(id)arg0 ;
-(id)installedAssetsMatchingFullAssetIds:(id)arg0 ;
-(void)eliminateAllForSelector:(id)arg0 completion:(id)arg1 ;
-(void)eliminatePromotedNeverLockedForSelector:(id)arg0 completion:(id)arg1 ;


@end


#endif