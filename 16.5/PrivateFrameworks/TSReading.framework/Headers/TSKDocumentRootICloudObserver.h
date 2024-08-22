// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKDOCUMENTROOTICLOUDOBSERVER_H
#define TSKDOCUMENTROOTICLOUDOBSERVER_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface TSKDocumentRootICloudObserver : NSObject {
    NSInteger _identifier;
    NSOperationQueue *_operationQueue;
    id *_block;
}


@property (readonly, nonatomic) NSInteger identifer; // ivar: _identifer


-(id)initWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)invokeWithDocumentRoot:(id)arg0 ;


@end


#endif