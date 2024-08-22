// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCESAGESIZEDLIST_H
#define TSCESAGESIZEDLIST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCESageSizedList : NSObject {
    vector<TSCEASTNodeArray *, std::allocator<TSCEASTNodeArray *>> _nodeArrays;
}


@property (readonly, nonatomic) BOOL isArray; // ivar: _isArray
@property (readonly, nonatomic) unsigned int numberOfItems;
@property (retain, nonatomic) NSString *trailingWhitespace; // ivar: _trailingWhitespace


-(?)arrayOrListNode;
-(?)functionNode:(?)arg0 functionNamewhitespaceAfterLabel;
-(?)makeListWithFirstElem:(?)arg0 trailingWhitespace:(?)arg1 isArrayparser;
-(id)initWithParser:(struct TSCEParser *)arg0 ;
-(void)appendNodeArray:(struct TSCEASTNodeArray *)arg0 ;


@end


#endif