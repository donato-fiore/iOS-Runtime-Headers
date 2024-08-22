// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCECELLDEPENDENCYROWPRINTER_H
#define TSCECELLDEPENDENCYROWPRINTER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSCEEdgeListPrinter.h"

@interface TSCECellDependencyRowPrinter : NSObject

@property (retain, nonatomic) NSString *cellID; // ivar: _cellID
@property (retain, nonatomic) TSCEEdgeListPrinter *dependentsList; // ivar: _dependentsList
@property (nonatomic) NSUInteger dirtyPrecedentCount; // ivar: _dirtyPrecedentCount
@property (nonatomic) BOOL isFormula; // ivar: _isFormula
@property (nonatomic) BOOL isInCycle; // ivar: _isInCycle
@property (retain, nonatomic) TSCEEdgeListPrinter *precedentsList; // ivar: _precedentsList


-(NSInteger)tsce_numericCompare:(id)arg0 ;
-(id)initWithCellID:(id)arg0 dirtyPrecedentCount:(NSUInteger)arg1 ;
-(id)stringForDependencyRow;
-(void)addDependentWithCellID:(id)arg0 forOwner:(id)arg1 ;
-(void)addPrecedentWithCellID:(id)arg0 forOwner:(id)arg1 ;


@end


#endif