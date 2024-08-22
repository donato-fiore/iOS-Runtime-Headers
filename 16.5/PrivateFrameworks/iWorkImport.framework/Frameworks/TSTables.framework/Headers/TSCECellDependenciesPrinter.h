// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCECELLDEPENDENCIESPRINTER_H
#define TSCECELLDEPENDENCIESPRINTER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface TSCECellDependenciesPrinter : NSObject

@property (retain, nonatomic) NSMutableArray *cleanCellDependencyRows; // ivar: _cleanCellDependencyRows
@property (retain, nonatomic) NSMutableArray *dirtyCellDependencyRows; // ivar: _dirtyCellDependencyRows
@property (nonatomic) NSUInteger numDirtyCells; // ivar: _numDirtyCells
@property (retain, nonatomic) NSString *ownerName; // ivar: _ownerName
@property (nonatomic) BOOL showCleanCells; // ivar: _showCleanCells


+(id)stringForOwnerKind:(unsigned short)arg0 ;
-(id)description;
-(id)init;
-(void)addDependencyRow:(id)arg0 ;


@end


#endif