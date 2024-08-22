// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EDITSCRIPT_H
#define _EDITSCRIPT_H

@class NSArray, NSMutableArray;
@protocol _EditScriptData;

#import <Foundation/Foundation.h>

#import "_IntArray2D.h"

@interface _EditScript : NSObject {
    BOOL _orderAtomsAscending;
    _IntArray2D *_distanceMatrix;
    NSInteger _currentOperation;
    id<_EditScriptData> *_itemAData;
    id<_EditScriptData> *_itemBData;
}


@property (copy, nonatomic) NSArray *operationPrecedenceArray; // ivar: _operationPrecedenceArray
@property (retain, nonatomic) NSMutableArray *script; // ivar: _script


-(id)initWithOperationPrecedence:(NSInteger)arg0 orderAtomsAscending:(BOOL)arg1 ;
-(id)operationPrecedenceArrayFromOperationPrecedence:(NSInteger)arg0 ;
-(void)addToCurrentScriptAtomEditOperation:(NSInteger)arg0 editIndex:(NSUInteger)arg1 newText:(id)arg2 indexInArrayB:(NSUInteger)arg3 ;
-(void)computeDistanceMatrix;
-(void)computeEditsFromMatrix;
-(void)finalizeCurrentScriptAtom;
-(void)initializeCurrentScriptAtom;


@end


#endif