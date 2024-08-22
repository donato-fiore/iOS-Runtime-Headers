// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHTABLEVIEWICONLIBRARY_H
#define SBHTABLEVIEWICONLIBRARY_H

@class NSHashTable, NSMapTable, NSString;
@protocol SBHIconLibraryQueryEngineObserver, SBHIconLibraryQueryEngine;

#import <Foundation/Foundation.h>

#import "SBHIconModel.h"
#import "SBHIconLibraryQueryResult.h"

@interface SBHTableViewIconLibrary : NSObject <SBHIconLibraryQueryEngineObserver>

 {
    NSHashTable *_observers;
    NSMapTable *_completionHandlerForQuery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (readonly, nonatomic) SBHIconLibraryQueryResult *lastQueryResults; // ivar: _lastQueryResults
@property (readonly, nonatomic) NSObject<SBHIconLibraryQueryEngine> *queryEngine; // ivar: _queryEngine
@property (readonly) Class superclass;


-(id)initWithIconModel:(id)arg0 ;
-(id)initWithIconModel:(id)arg0 queryEngine:(id)arg1 ;
-(void)_dispatchQueryResult:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)engine:(id)arg0 failedToExecuteQuery:(id)arg1 withError:(id)arg2 ;
-(void)engine:(id)arg0 queryResultsWereUpdated:(id)arg1 ;
-(void)executeQuery:(id)arg0 ;
-(void)executeQuery:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif