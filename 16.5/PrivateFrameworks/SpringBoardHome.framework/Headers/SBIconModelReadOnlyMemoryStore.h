// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONMODELREADONLYMEMORYSTORE_H
#define SBICONMODELREADONLYMEMORYSTORE_H



#import "SBIconModelMemoryStore.h"

@interface SBIconModelReadOnlyMemoryStore : SBIconModelMemoryStore



-(BOOL)deleteCurrentIconStateWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)deleteDesiredIconStateWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)saveCurrentIconState:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg0 error:(*id)arg1 ;


@end


#endif