// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISURLBAGBACKEND_H
#define ISURLBAGBACKEND_H

@class NSMutableDictionary, SSDoubleLinkedList;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISURLBagBackend : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSMutableDictionary *bagValuesDictionary; // ivar: _bagValuesDictionary
@property (retain, nonatomic) SSDoubleLinkedList *bagValuesList; // ivar: _bagValuesList


+(BOOL)_bagValue:(id)arg0 equalsBagValue:(id)arg1 ;
-(id)_bagValuesMapTableWithInitialValues:(id)arg0 ;
-(id)_valueForKey:(id)arg0 forBagValuesNode:(id)arg1 ;
-(id)deltaDictionaryRepresentationForBagWithKey:(id)arg0 ;
-(id)description;
-(id)diagnostics;
-(id)dictionaryRepresentationForBagWithKey:(id)arg0 ;
-(id)init;
-(id)valueForKey:(id)arg0 forBagWithKey:(id)arg1 ;
-(void)addBagValues:(id)arg0 forBagWithKey:(id)arg1 ;
-(void)removeBagValuesForBagWithKey:(id)arg0 ;


@end


#endif