// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPOSTERBOARDUPDATEMANAGER_H
#define SBPOSTERBOARDUPDATEMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface SBPosterBoardUpdateManager : NSObject {
    NSHashTable *_observers;
}




+(id)sharedInstance;
-(BOOL)_isXPCActivity:(NSInteger)arg0 ;
-(id)_criteriaForUpdate:(NSInteger)arg0 ;
-(id)_xpcActivityNameForUpdate:(NSInteger)arg0 ;
-(id)init;
-(void)_noteApplicationsChanged:(id)arg0 ;
-(void)_notifyDidFinishUpdate:(NSInteger)arg0 error:(id)arg1 ;
-(void)_notifyWillBeginUpdate:(NSInteger)arg0 ;
-(void)_registerForWork:(NSInteger)arg0 ;
-(void)_unregisterForWork:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)executeUpdate:(NSInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif