// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCETABLESBYNAME_H
#define TSCETABLESBYNAME_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"
#import "TSCETablesByNameDistributor.h"

@interface TSCETablesByName : NSObject {
    NSMutableDictionary *_tablesByTableNameByContainerName;
    TSCECalculationEngine *_calcEngine;
}


@property (readonly, nonatomic) TSCETablesByNameDistributor *tableNameChangeDistributor; // ivar: _tableNameChangeDistributor


+(id)containerNameForTable:(id)arg0 ;
+(id)tableNameForTable:(id)arg0 ;
-(BOOL)resolverNameIsUsed:(id)arg0 ;
-(id)anyTableForTableName:(id)arg0 ;
-(id)description;
-(id)initWithCalcEngine:(id)arg0 ;
-(id)resolverMatchingName:(id)arg0 ;
-(id)resolversMatchingPrefix:(id)arg0 ;
-(id)tableForTableName:(id)arg0 containerName:(id)arg1 ;
-(void)addTable:(id)arg0 ;
-(void)dropTable:(id)arg0 ;
-(void)dropTable:(id)arg0 withTableName:(id)arg1 withContainerName:(id)arg2 ;
-(void)renameTable:(id)arg0 fromName:(id)arg1 ;
-(void)willClose;


@end


#endif