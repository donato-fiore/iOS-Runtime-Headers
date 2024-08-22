// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUOBJECTGRAPH_H
#define VMUOBJECTGRAPH_H



#import "VMUDirectedGraph.h"
#import "VMUObjectGraph.h"
#import "VMUClassInfoMap.h"

@interface VMUObjectGraph : VMUDirectedGraph {
    *_VMUObjectGraphEdge _referenceTable;
    unsigned int _referenceTableCapacity;
    *_VMUObjectGraphEdgeLarge _referenceTableLarge;
    unsigned int _referenceTableLargeCount;
    unsigned int _referenceTableLargeCapacity;
    *_VMUBlockNode _internalizedNodes;
    unsigned int _internalizedCount;
    *id _classInfos;
    unsigned int _classInfosCount;
    id *_nodeProvider;
    VMUObjectGraph *_referenceGraph;
    unsigned int _referenceGraphNodeNamespaceSize;
    unsigned int _referenceGraphEdgeNamespaceSize;
    int _referencingCount;
}


@property (retain, nonatomic) VMUClassInfoMap *indexedClassInfos; // ivar: _knownClassInfos


-(*void)_compareWithGraph:(id)arg0 andMarkOnMatch:(BOOL)arg1 ;
-(*void)createMapForIntersectGraph:(id)arg0 ;
-(*void)createMapForMinusGraph:(id)arg0 ;
-(BOOL)_commonHighAddressBit;
-(BOOL)hasClassInfosDerivedFromStackBacktraces;
-(BOOL)isGroupNode:(unsigned int)arg0 ;
-(BOOL)isRootNode:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchived:(id)arg0 version:(NSInteger)arg1 options:(NSUInteger)arg2 diskLogs:(id)arg3 error:(*id)arg4 ;
-(id)initWithNodeCount:(unsigned int)arg0 nodeProvider:(id)arg1 ;
-(id)initWithNodesNoCopy:(struct _VMUBlockNode *)arg0 nodeCount:(unsigned int)arg1 ;
-(id)subgraphWithShortestPathsFromNode:(unsigned int)arg0 toNodes:(*void)arg1 ;
-(id)subgraphWithUniquePathsFromNode:(unsigned int)arg0 toNodes:(*void)arg1 ;
-(struct ? )_rawReferenceInfoWithName:(unsigned int)arg0 ;
-(struct ? )nodeDetails:(unsigned int)arg0 ;
-(struct ? )referenceInfoWithName:(unsigned int)arg0 ;
-(unsigned int)addEdgeFromNode:(unsigned int)arg0 sourceOffset:(NSUInteger)arg1 withScanType:(unsigned int)arg2 toNode:(unsigned int)arg3 destinationOffset:(NSUInteger)arg4 ;
-(unsigned int)addEdgeFromNode:(unsigned int)arg0 toNode:(unsigned int)arg1 ;
-(unsigned int)enumerateMarkedObjects:(*void)arg0 withBlock:(id)arg1 ;
-(unsigned int)enumerateObjectsContainedInCollection:(unsigned int)arg0 withBlock:(id)arg1 ;
-(unsigned int)enumerateObjectsOfGroupNode:(unsigned int)arg0 withBlock:(id)arg1 ;
-(unsigned int)enumerateObjectsWithBlock:(id)arg0 ;
-(unsigned int)enumerateReferencesOfNode:(unsigned int)arg0 withBlock:(id)arg1 ;
-(unsigned int)enumerateReferencesWithBlock:(id)arg0 ;
-(unsigned int)nodeForAddress:(NSUInteger)arg0 ;
-(unsigned int)nodeReferencedFromSourceNode:(unsigned int)arg0 byIvarWithName:(id)arg1 ;
-(unsigned int)scanTypeOfReferenceWithName:(unsigned int)arg0 ;
-(void)_modifyDerivativeGraphCount:(int)arg0 ;
-(void)_refineTypesWithOverlay:(id)arg0 ;
-(void)_renameWithNodeMap:(*unsigned int)arg0 nodeNamespace:(unsigned int)arg1 edgeMap:(*unsigned int)arg2 edgeNamespace:(unsigned int)arg3 ;
-(void)archiveDictionaryRepresentation:(id)arg0 options:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)internalizeNodes;
-(void)setClassInfoIndex:(unsigned int)arg0 forNode:(unsigned int)arg1 ;
-(void)stronglyConnectedComponentSearch:(unsigned int)arg0 withRecorder:(id)arg1 ;


@end


#endif