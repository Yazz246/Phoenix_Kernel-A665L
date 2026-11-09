// SPDX-License-Identifier: GPL-2.0
#include <linux/module.h>
#include <linux/types.h>
#include <linux/power_supply.h>

struct oplus_gauge_chip;

/* stub: stack charger Oplus tidak dibuild di A70 */
void oplus_gauge_init(struct oplus_gauge_chip *chip)
{
}
EXPORT_SYMBOL(oplus_gauge_init);

bool oplus_get_bc12_done_sprd(void)
{
	return true;
}
EXPORT_SYMBOL(oplus_get_bc12_done_sprd);

int oplus_get_charger_type_sprd(void)
{
	return POWER_SUPPLY_TYPE_USB;
}
EXPORT_SYMBOL(oplus_get_charger_type_sprd);
