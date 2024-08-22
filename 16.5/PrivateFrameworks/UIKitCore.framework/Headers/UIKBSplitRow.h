// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBSPLITROW_H
#define UIKBSPLITROW_H

@class NSMutableArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "UIKBTree.h"

@interface UIKBSplitRow : NSObject {
    NSMutableArray *_vacancies;
    UIKBTree *_keylistLeft;
    UIKBTree *_geolistLeft;
    UIKBTree *_attrlistLeft;
    UIKBTree *_keylistRight;
    UIKBTree *_geolistRight;
    UIKBTree *_attrlistRight;
}


@property CGSize defaultKeySize; // ivar: _defaultKeySize
@property (retain) NSDictionary *hints; // ivar: _hints
@property (readonly) NSMutableArray *keys; // ivar: _keys
@property (nonatomic) unsigned char rowIndex; // ivar: _rowIndex
@property CGFloat rowOffset; // ivar: _rowOffset
@property CGFloat rowWidth; // ivar: _rowWidth


-(id)description;
-(id)init;
-(id)keyAtIndex:(int)arg0 ;
-(id)listOfType:(int)arg0 left:(BOOL)arg1 ;
-(void)addKey:(id)arg0 ;
-(void)dealloc;


@end


#endif