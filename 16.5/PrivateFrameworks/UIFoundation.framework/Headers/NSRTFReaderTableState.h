// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSRTFREADERTABLESTATE_H
#define NSRTFREADERTABLESTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "NSTextTable.h"

@interface NSRTFReaderTableState : NSObject {
    NSTextTable *_currentTable;
    NSTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    BOOL _currentRowIsLast;
}




-(void)dealloc;


@end


#endif