//
//  MainTableView.h
//  PaymentApp
//
//  Created by Vitor Santos do Nascimento on 1/12/18.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CellType) {
	Amount,
	Bank,
	CreditCard,
	Installments
};

@interface MainTableView : UITableView

@end