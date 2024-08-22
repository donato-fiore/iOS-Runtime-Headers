// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKDOCUMENTROOTICLOUDOBSERVER_H
#define TSKDOCUMENTROOTICLOUDOBSERVER_H


#import <Foundation/Foundation.h>


@interface TSKDocumentRootICloudObserver : NSObject {
    NSInteger _identifier;
    id *_block;
}


@property (readonly, nonatomic) NSInteger identifer; // ivar: _identifer
@property (readonly, nonatomic) BOOL suspendedCollaboration; // ivar: _suspendedCollaboration


-(id)initWithSuspendedCollaboration:(BOOL)arg0 block:(id)arg1 ;
-(void)invokeWithDocumentRoot:(id)arg0 reason:(NSUInteger)arg1 ;


@end


#endif