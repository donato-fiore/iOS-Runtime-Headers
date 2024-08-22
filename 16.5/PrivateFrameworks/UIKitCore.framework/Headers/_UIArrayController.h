// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIARRAYCONTROLLER_H
#define _UIARRAYCONTROLLER_H

@class NSOrderedSet, NSOperationQueue, NSPredicate, NSArray;
@protocol _UIArrayControllerDelegate;

#import <Foundation/Foundation.h>


@interface _UIArrayController : NSObject {
    BOOL _firstUpdateSent;
    BOOL _invalidated;
}


@property (weak, nonatomic) NSObject<_UIArrayControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSOrderedSet *lastSnapshot; // ivar: _lastSnapshot
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


-(BOOL)objectAttributeModified:(id)arg0 newObject:(id)arg1 ;
-(id)_computeUpdatesFromOld:(id)arg0 toNew:(id)arg1 changedItems:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)callUpdateHandler:(id)arg0 changeDictionary:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)processUpdate:(id)arg0 changedObjects:(id)arg1 ;


@end


#endif