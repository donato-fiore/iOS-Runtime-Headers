// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTVISUALFORMATTREEPARSER_H
#define _UICOLLECTIONLAYOUTVISUALFORMATTREEPARSER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutVisualTreeNode.h"

@interface _UICollectionLayoutVisualFormatTreeParser : NSObject

@property (retain, nonatomic) _UICollectionLayoutVisualTreeNode *root; // ivar: _root
@property (copy, nonatomic) NSArray *visualFormats; // ivar: _visualFormats


+(id)treeParserWithVisualFormats:(id)arg0 ;
-(id)_nodeForParser:(id)arg0 withParserDict:(id)arg1 size:(id)arg2 ;
-(id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg0 ;
-(id)_parse;
-(id)description;
-(id)initWithVisualFormats:(id)arg0 ;
-(void)_visitChildrenOfNodeDepthFirst:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateTreeNodesDepthFirstUsingBlock:(id)arg0 ;


@end


#endif