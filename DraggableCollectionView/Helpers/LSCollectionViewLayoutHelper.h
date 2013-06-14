//
//  Copyright (c) 2013 Luke Scott
//  https://github.com/lukescott/DraggableCollectionView
//  Distributed under MIT license
//

#import <Foundation/Foundation.h>
#import "UICollectionViewLayout_Warpable.h"
#import "PSTCollectionView.h"

@interface LSCollectionViewLayoutHelper : NSObject

- (id)initWithCollectionViewLayout:(PSTCollectionViewLayout<UICollectionViewLayout_Warpable>*)collectionViewLayout;

- (NSArray *)modifiedLayoutAttributesForElements:(NSArray *)elements;
- (NSIndexPath *)translateIndexPath:(NSIndexPath *)indexPath;

@property (nonatomic, weak, readonly) PSTCollectionViewLayout<UICollectionViewLayout_Warpable> *collectionViewLayout;
@property (strong, nonatomic) NSIndexPath *warpFromIndexPath;
@property (strong, nonatomic) NSIndexPath *warpToIndexPath;
@property (strong, nonatomic) NSIndexPath *hiddenIndexPath;
@end
