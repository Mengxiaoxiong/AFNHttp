//
//  GoodsListModel.h
 
//
//  Created by Mengxx on 2019/8/18.
//  Copyright © 2019年 BattlePetal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GoodsGroup.h"


@interface GoodsListModel : NSObject
@property (nonatomic, assign)NSInteger sectionNumber;
@property (nonatomic, strong)NSMutableArray <GoodsGroup *>* goodsGroups;

@end
