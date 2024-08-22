// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPRESOURCEREQUESTMANAGER_H
#define TSPRESOURCEREQUESTMANAGER_H

@class TSUObserverNotifier, NSString;
@protocol TSUResourceRequestObserver, TSUResourceRequestObservable;

#import <Foundation/Foundation.h>


@interface TSPResourceRequestManager : NSObject <TSUResourceRequestObserver, TSUResourceRequestObservable>

 {
    TSUObserverNotifier *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(NSInteger)resourceAccessTypeForResourceRequest:(id)arg0 ;
-(id)createResourceRequestForDocumentResourceInfos:(id)arg0 resourceContext:(id)arg1 ;
-(id)createResourceRequestForTags:(id)arg0 resourceContext:(id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resourceRequestDidPerformResourceAccess:(id)arg0 error:(id)arg1 ;
-(void)resourceRequestWillPerformResourceAccess:(id)arg0 ;


@end


#endif