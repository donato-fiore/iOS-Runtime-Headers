// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFPITEMRESOLVER_H
#define WFFPITEMRESOLVER_H

@class FPItemCollection, NSString, NSMutableArray;
@protocol FPItemCollectionMinimalDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFFPItemResolver : NSObject <FPItemCollectionMinimalDelegate>



@property (retain, nonatomic) FPItemCollection *collection; // ivar: _collection
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *mutableComponents; // ivar: _mutableComponents
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithDomainID:(id)arg0 relativeSubpath:(id)arg1 completionHandler:(id)arg2 ;
-(void)collectionDidFinishGathering:(id)arg0 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 ;
-(void)determineNextItemIfPossible;
-(void)startObservingFolderItemCollection:(id)arg0 ;


@end


#endif