// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKDOCUMENTMODELENUMERATOR_H
#define TSKDOCUMENTMODELENUMERATOR_H

@class NSEnumerator, NSMutableArray;
@protocol TSKModel;



@interface TSKDocumentModelEnumerator : NSEnumerator {
    BOOL _stop;
}


@property (retain, nonatomic) NSMutableArray *enumeratorStack; // ivar: _enumeratorStack
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (nonatomic) BOOL filterBeforeAddingChildren; // ivar: _filterBeforeAddingChildren
@property (retain, nonatomic) NSObject<TSKModel> *root; // ivar: _root


-(id)initWithEnumerator:(id)arg0 filter:(id)arg1 ;
-(id)initWithRootModelObject:(id)arg0 filter:(id)arg1 ;
-(id)nextObject;
-(void)dealloc;
-(void)enumerateReferencedStylesUsingBlock:(id)arg0 ;
-(void)enumerateUsingBlock:(id)arg0 ;


@end


#endif